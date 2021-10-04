const { readDoc } = require('../plugins/ReadExcel')
const { bulk } = require('../plugins/MailSender')

const MailController = {
  index: (req, res) => {
    return res.json({
      status: true,
      message: "no page found here!"
    })
    // req.app.socket.emit('knexx', 'hello from controller')
  },
  read: async (req, res) => {
    try {
      if (req.files.doc) {
        const { auth, from, subject, message } = req.body
        const readFile = await readDoc(req.files.doc)
        
        if (!readFile.status) return res.json(readFile)
        if (readFile.status && readFile.message.length > 0) {
          const authJSON = JSON.parse(auth)
          const sendBulk = await bulk(authJSON, from, readFile.message, subject, message)
          readFile.message.forEach(reciver => {
            sendBulk.sendMail({
              from: `${from} <${authJSON.user}>`,
              to: reciver,
              subject: subject,
              html: message
            }, error => {
              if (error) return res.json({
                status: false,
                message: "Error Blast: " + error
              })
              return res.json({
                status: true,
                message: "Complete sending blast"
              })
            })
          })
        } else {
          return res.json({
            status: false,
            message: "Email tujuan tidak di temukan"
          })
        }
      } else {
        return res.json({
          status: false,
          message: "Error: request not a file"
        })
      }
    } catch (error) {
      return res.json({
        status: false,
        message: "Error: " + error
      })
    }
  },
  send: async (req, res) => {
    const data = await bulk()
    return res.json(data)
  }
}

module.exports = MailController
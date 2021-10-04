const nodemailer = require('nodemailer')

module.exports = (host, user, pass) => {
  const config = {
    pool: true,
    host: host,
    port: 465,
    secure: true,
    auth: {
      user: user,
      pass: pass
    }
  }
  return nodemailer.createTransport(config)
}
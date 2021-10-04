const XLSX = require("xlsx")

const readDoc = file => {
  try {
    const allowType = [
      'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet'
    ]
    let bracket = []
    
    if (!ArrayBuffer.isView(file.data)) return { status: false, message: "is not a buffer" }
    if (file.mimetype != allowType[0]) return { status: false, message: "file not allowed" }

    const fileData = XLSX.read(file.data)
    const foundSheet = fileData.SheetNames
    
    foundSheet.forEach((el, it) => {
      XLSX.utils.sheet_to_json(
        fileData.Sheets[foundSheet[it]]
      ).map(data => { if (data.email != null) return bracket.push(data.email) })
    })

    return { status: true, message: bracket }
  } catch (error) {
    return { status: false, message: "Error: " + error }
  }
}

module.exports = { readDoc }
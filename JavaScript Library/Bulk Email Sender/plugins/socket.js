module.exports = server => {
  require("socket.io")(server, {
    cors: {
      origin: "*",
      methods: ['GET', 'POST']
    }
  })
}
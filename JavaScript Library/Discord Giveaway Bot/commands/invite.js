const Discord = require('discord.js');
const config = require('../config.json');

module.exports.run = async (client, message, args) => {
    let prefix = config.prefix;
    if (message.author.bot) return;
    if(!message.content.startsWith(prefix)) return;

    let invite = new Discord.MessageEmbed()
    .setColor('RANDOM')
    .setTitle("Invite Link!")
    .addField("Do you want to invite me in your server?", "[Click here to invite me](https://discord.com/oauth2/authorize?client_id=781518017497530419&scope=bot&permissions=66453313)")
    .setTimestamp()
    .setFooter(`Requested by ${message.author.tag}`, client.user.displayAvatarURL())
    message.channel.send(invite);
}

module.exports.help = {
    name: "invite"
}

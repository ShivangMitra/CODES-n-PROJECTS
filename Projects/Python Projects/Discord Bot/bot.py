#Token - NzgxMTAzMDY1MTAwOTc2MTcw.X74w6g.Z5vvGQ9xKCRlKyCoFSUa6HZ-GFo
# Client id - 781103065100976170
# BOT INVITE - https://discordapp.com/oauth2/authorize?client_id=ID_HERE&scope=bot&permissions=0
# BOT INVITE - https://discordapp.com/oauth2/authorize?client_id=781103065100976170&scope=bot&permissions=0

# Server id - 781102004726530049

import discord
import time
import asyncio

messages = joined = 0

token = "NzgxMTAzMDY1MTAwOTc2MTcw.X74w6g.Z5vvGQ9xKCRlKyCoFSUa6HZ-GFo"

client = discord.Client()


async def update_stats():
    await client.wait_until_ready()
    global messages, joined

    while not client.is_closed():
        try:
            with open("stats.txt", "a") as f:
                f.write(f"Time: {int(time.time())}, Messages {messages}, Members Joined: {joined}\n")

            messages = 0
            joined = 0

            await asyncio.sleep(5)

        except Exception as e:
            print(e)
            await asyncio.sleep(5)


@client.event
async def on_member_update(before, after):
    n = after.nick
    if n:
        if n.lower().count == "Zephyrus" > 0:
            last = before.nick
            if last:
                await after.edit(nick=last)
            else:
                await after.edit(nick="PHALTU AADMI")

@client.event
async def on_member_join(member):
    global joined
    joined += 1

    for channel in member.server.channels:
        if str(channel) == "general":
            await client.send_message(f"Welcome to the server {member.mention}")

@client.event
async def on_message(message):
    global messages
    messages += 1

    server_id = client.get_guild(781102004726530049)
    channels = ["zeph_bot"]

    # valid_users = ["name#with_tag_number"]

    bad_words = ["fuck"]

    for word in bad_words:
        if message.content.count(word) > 0:
            print("A bad word was said")
            await message.channel.purge(limit=1)

    if str(message.content) == "!help":
        embed = discord.Embed(title="BOT commands", description="Useful commands")
        embed.add_field(name="!hello", value="Greets the user")
        embed.add_field(name="!users", value="Number of members on the server")
        await message.channel.send(content=None, embed=embed)

    # if str(message.channel) in channels and str(message.author) in valid_users:
    if str(message.channel) in channels:
        if message.content.find("!hello") != -1:
            await message.channel.send("hey")
        elif message.content == "!users":
            await message.channel.send(f"No. of members {server_id.member_count}")
    # else:
    #     print(f"User: {message.author} tried to use command {message.content}, in channel {message.channel}")

client.loop.create_task(update_stats())

client.run(token)
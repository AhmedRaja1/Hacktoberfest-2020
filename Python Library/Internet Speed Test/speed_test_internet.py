import speedtest

st = speedtest.Speedtest()

print("After analyzing your network")

print("download speed",st.download())

print("upload speed is", st.upload())

st.get_servers([])
print(st.results.ping)


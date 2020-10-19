import speedtest

st = speedtest.Speedtest()

print("download speed",st.download())

print("upload speed is", st.download())

st.get_servers([])
print(st.results.ping)


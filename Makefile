
compile:
	arduino-cli compile tallersensorica.ino --fqbn arduino:avr:uno

upload: compile
	arduino-cli upload -p ${DEVICE} --fqbn arduiono:avr:uno tallersensorica.ino

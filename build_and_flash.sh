# Using a script to keep things simple, repeatable and stateless.

# Refresh build directory
rm build -r
mkdir build

(
	cd build
	cmake ..
	make -j12
	openocd -f interface/picoprobe.cfg -f target/rp2040.cfg -c "program firmware.elf verify reset"
)
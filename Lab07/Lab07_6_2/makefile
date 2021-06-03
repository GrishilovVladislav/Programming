all: buildMain buildTest runTest clean

buildMain:
	mkdir -p target/main
	g++ -o target/main/operations source/main.cpp -lm

buildTest:
	mkdir -p target/test
	g++ -o target/test/Test -Dmain=_main source/main.cpp source/test.cpp -lm
runTest:
	./target/test/Test

clean:
	rm -rf target
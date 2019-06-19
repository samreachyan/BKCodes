all: maxseq dequy hanoitower lietkenhiphan nghiemnguyenduong hoanvi

hoanvi: hoanvi.o
	g++ -o hoanvi hoanvi.o
hoanvi.o: hoanvi.cpp
	g++ -c hoanvi.cpp

nghiemnguyenduong: nghiemnguyenduong.o
	g++ -o nghiemnguyenduong nghiemnguyenduong.o
nghiemnguyenduong.o: nghiemnguyenduong.cpp
	g++ -c nghiemnguyenduong.cpp

lietkenhiphan: lietkenhiphan.o
	g++ -o lietkenhiphan lietkenhiphan.o
lietkenhiphan.o: lietkenhiphan.cpp
	g++ -c lietkenhiphan.cpp
	
hanoitower: hanoitower.o
	g++ -o hanoitower hanoitower.o
hanoitower.o: hanoitower.cpp
	g++ -c hanoitower.cpp

dequy: dequy.o
	g++ -o dequy dequy.o
dequy.o: dequy.cpp
	g++ -c dequy.cpp

maxseq: maxseq.o
	g++ -o maxseq maxseq.o

maxseq.o: maxseq.cpp
	g++ -c maxseq.cpp


clean:
	rm *.o 

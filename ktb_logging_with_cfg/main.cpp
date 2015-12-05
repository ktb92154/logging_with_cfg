#include "logger.h"

int main(int, char*[]) {
	kLogger log;

	log.InitLog("test");

	log.Trace("A trace severity message"); // Not written to file
	log.Debug("A debug severity message"); // Not written to file
	log.Info("An informational severity message");
	log.Warning("A warning severity message");
	log.Error("An error severity message");
	log.Fatal("A fatal severity message");
	std::cin.get();
	return 0;
}
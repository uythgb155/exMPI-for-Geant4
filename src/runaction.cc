#include "runaction.hh"

#include "G4Run.hh"
#include "G4RunManager.hh"


runaction::runaction()
    :G4UserRunAction()
{
    G4RunManager::GetRunManager()->SetPrintProgress(100);
}
runaction::~runaction()
{}

void runaction::BeginOfRunAction(const G4Run *)
{
    G4RunManager::GetRunManager()->SetRandomNumberStore(false);
}

void runaction::EndOfRunAction(const G4Run *)
{}

#include "stepaction.hh"
#include "eventaction.hh"
#include "DetectorConstruction.hh"

#include "G4Step.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"

stepaction::stepaction(eventaction *eventaction)
    :G4UserSteppingAction()
{}

stepaction::~stepaction()
{

}

void stepaction::UserSteppingAction(const G4Step *step)
{

}

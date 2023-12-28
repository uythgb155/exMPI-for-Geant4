#include "eventaction.hh"

#include "G4Event.hh"

eventaction::eventaction()
    :G4UserEventAction()
{}
eventaction::~eventaction()
{}

void eventaction::BeginOfEventAction(const G4Event *)
{}
void eventaction::EndOfEventAction(const G4Event* event)
{
    G4int eventID=event->GetEventID();
    if (eventID%1000000==0)
    {
        G4cout<<"event:"<<eventID<<G4endl;
    }
}

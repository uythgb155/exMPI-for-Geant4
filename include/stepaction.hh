#ifndef stepaction_hh
#define stepaction_hh1

#include "G4UserSteppingAction.hh"
#include "globals.hh"

class eventaction;

class stepaction : public G4UserSteppingAction
{
public:
    stepaction(eventaction*);
    virtual ~stepaction();
    virtual void UserSteppingAction(const G4Step*);
};



#endif // STEPACTION_HH

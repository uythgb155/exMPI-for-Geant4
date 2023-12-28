#ifndef runaction_hh
#define runaction_hh 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class G4Run;

class runaction : public G4UserRunAction
{
public:
    runaction();
    virtual ~runaction();

    virtual void BeginOfRunAction(const G4Run* run);
    virtual void EndOfRunAction(const G4Run* run);

};


#endif // RUNACTION_HH

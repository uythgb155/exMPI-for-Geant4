#ifndef eventaction_hh
#define eventaction_hh 1

#include "G4UserEventAction.hh"
#include "globals.hh"


class eventaction: public G4UserEventAction
{
public:
eventaction();
virtual ~eventaction();
virtual void BeginOfEventAction(const G4Event* );
virtual void EndOfEventAction(const G4Event* );
};


#endif // EVENTACTION_HH

/*
 * AttentionalFocusCB.h
 *
 *  Created on: 17 Jun, 2014
 *      Author: misgana
 */

#ifndef _ATTENTIONAL_FOCUS_CB_H
#define _ATTENTIONAL_FOCUS_CB_H

#include <opencog/atomspace/AtomSpace.h>

#include "PatternMatchCallback.h"

namespace opencog{

class AttentionalFocusCB: public  virtual PatternMatchCallback {

private:
 AtomSpace * _atom_space;
public:
	AttentionalFocusCB(AtomSpace * as) : _atom_space(as){}

	bool node_match(Handle& node1, Handle& node2);

	bool link_match(LinkPtr& link1, LinkPtr& link2);

	IncomingSet get_incoming_set(Handle h);


};
} //namespace opencog
#endif /* _ATTENTIONALFOCUSCB_H */

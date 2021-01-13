//---------------------------------------------------------------------------
//	Greenplum Database
//	Copyright (C) 2021 VMware
//
//	@filename:
//		CPartitionSelectorRewindabilityTest.h
//
//	@doc:
//		Test to ensure that no plan with a Rewindable DPE PartitionSelector
//		is generated.
//
//---------------------------------------------------------------------------
#ifndef GPOPT_CPartitionSelectorRewindabilityTest_H
#define GPOPT_CPartitionSelectorRewindabilityTest_H

#include "gpos/base.h"

namespace gpopt
{
class CPartitionSelectorRewindabilityTest
{
public:
	// unittests
	static gpos::GPOS_RESULT EresUnittest();
};	// class CPartitionSelectorRewindabilityTest
}  // namespace gpopt

#endif	//GPOPT_CPartitionSelectorRewindabilityTest_H

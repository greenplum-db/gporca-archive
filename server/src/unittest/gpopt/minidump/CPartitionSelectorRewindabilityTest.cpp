//---------------------------------------------------------------------------
//	Greenplum Database
//	Copyright (C) 2021 VMware
//
//	@filename:
//		CPartitionSelectorRewindabilityTest.cpp
//
//	@doc:
//		Test to ensure that no plan with a Rewindable DPE PartitionSelector
//		is generated.
//
//---------------------------------------------------------------------------
#include "unittest/gpopt/minidump/CPartitionSelectorRewindabilityTest.h"

#include "unittest/gpopt/CTestUtils.h"



//---------------------------------------------------------------------------
//	@function:
//		CPartitionSelectorRewindabilityTest::EresUnittest
//
//	@doc:
//		Unittest for ensuring correct rewindability for PartitionSelectors.
//
//---------------------------------------------------------------------------
gpos::GPOS_RESULT
CPartitionSelectorRewindabilityTest::EresUnittest()
{
	ULONG ulTestCounter = 0;
	const CHAR *rgszFileNames[] = {
		"../data/dxl/minidump/PartitionSelectorRewindability.mdp"};

	return CTestUtils::EresUnittest_RunTestsWithoutAdditionalTraceFlags(
		rgszFileNames, &ulTestCounter, GPOS_ARRAY_SIZE(rgszFileNames), true,
		true);
}
// EOF

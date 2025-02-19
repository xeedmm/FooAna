/*************************************************************************
 * Author: Dominik Werthmueller, 2019
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// FAUtilsA2                                                            //
//                                                                      //
// This namespace contains some often used utility functions related to //
// the A2 experiment.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef FooAna_FAUtilsA2
#define FooAna_FAUtilsA2

#include "FAVarAbs.h"

namespace FAUtilsA2
{
    Int_t LoadTaggerCalibration(const Char_t* fileName, Int_t nChannel,
                                Double_t* taggEnergy, Double_t* taggEnergyWidth = 0,
                                Bool_t quiet = kFALSE);

    void SetDetFillFlags(Int_t det, FAVarAbs& v_cb, FAVarAbs& v_taps);
}

#endif


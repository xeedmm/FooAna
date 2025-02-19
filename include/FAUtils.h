/*************************************************************************
 * Author: Dominik Werthmueller, 2019
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// FAUtils                                                              //
//                                                                      //
// This namespace contains some often used utility functions.           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef FooAna_FAUtils
#define FooAna_FAUtils

#include "TDataType.h"

class TLorentzVector;
class TAxis;
class TH1;

namespace FAUtils
{
    Char_t TreeDataTypeToChar(EDataType datatype);
    Int_t ShowBanner();
    Int_t LaunchProgressServer();

    TString FormatTimeSec(Double_t seconds);
    TString ExtractFileName(const Char_t* s);
    TString ExpandPath(const Char_t* p);
    Bool_t FileExists(const Char_t* f);
    template <class T>
    Bool_t LoadObject(const Char_t* file, const Char_t* name, T*& out);

    void NormHistogram(TH1* h, TH1* hnorm);
    TAxis CreateVariableAxis(const Char_t* binning);
    Int_t CalcBinOverlapWeights(TAxis* axis, Double_t x, Double_t x_width,
                                std::vector<std::pair<Int_t, Double_t>>& out);

    void Calculate4Vector(Double_t theta, Double_t phi, Double_t t, Double_t mass,
                          TLorentzVector& p4);
    void Calculate4VectorTOF(Double_t theta, Double_t phi, Double_t tof, Double_t mass,
                             TLorentzVector& p4);
    Double_t CalculateEkinTOF(Double_t tof, Double_t mass);
}

#endif


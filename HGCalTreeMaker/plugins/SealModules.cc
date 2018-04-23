#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_Tree.h"
#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_Event.h"
#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_GenParticles.h"
#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_HcalRecHits.h"
#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_HGCRecHits.h"
#include "HGCalAnalysis/HGCalTreeMaker/interface/HGCalTupleMaker_HGCSimHits.h"

DEFINE_FWK_MODULE(HGCalTupleMaker_Tree);
DEFINE_FWK_MODULE(HGCalTupleMaker_Event);
DEFINE_FWK_MODULE(HGCalTupleMaker_GenParticles);
DEFINE_FWK_MODULE(HGCalTupleMaker_HBHERecHits);
DEFINE_FWK_MODULE(HGCalTupleMaker_HORecHits);
DEFINE_FWK_MODULE(HGCalTupleMaker_HFRecHits);
DEFINE_FWK_MODULE(HGCalTupleMaker_HGCRecHits);
DEFINE_FWK_MODULE(HGCalTupleMaker_HGCSimHits);

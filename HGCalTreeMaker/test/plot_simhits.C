{

  TFile *_file1 = TFile::Open("ntuples_ttbar_D28_100e.root");
  TTree *tree = (TTree*)_file0->Get("hgcalTupleTree/tree");

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  c1->Divide(2,2);
  c1->cd(1);
  tree->Draw("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5):HGCSimHitsPosz","HGCSimHitsIndex==0","colz");
  c1->cd(2);
  tree->Draw("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5):HGCSimHitsPosz","HGCSimHitsIndex==1","colz");
  c1->cd(3);
  tree->Draw("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5):HGCSimHitsPosz","HGCSimHitsIndex==2","colz");
  c1->cd(4);
  tree->Draw("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5):HGCSimHitsPosz","HGCSimHitsIndex==3","colz");

  c1->Print("test.pdf");

  TCanvas *c2 = new TCanvas("c2","c2",800,600);
  c2->Divide(2,2);
  c2->cd(1);
  tree->Draw("HGCSimHitsLayer","HGCSimHitsIndex==3","colz"); // HFNose
  c2->cd(2);
  tree->Draw("HGCSimHitsPosx:HGCSimHitsPosy","HGCSimHitsIndex==3","colz"); // HFNose
 

}

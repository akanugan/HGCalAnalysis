{

  TFile *_file0 = TFile::Open("ntupleDigis_ttbar_D31.root");
  TTree *tree = (TTree*)_file0->Get("hgcalTupleTree/tree");

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  c1->Divide(2,2);
  //c1->Print("test.pdf(",".pdf");
  //c1->cd(1);
  //TH2F* h1 = new TH2F("h1","h1",100,1020,1120,120,0,120);
  // h1->GetXaxis()->SetLabel("HGCSimHitsPosz");
  //h1->GetYaxis()->SetLabel("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5)");
  c1->cd(1);
  tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==0","colz");
  c1->cd(2);
  tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==1","colz");
  c1->cd(3);
  tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==2","colz");
  c1->cd(4);
  tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==3","colz");
  // tree->Draw("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5):HGCSimHitsPosz>>h1","HGCSimHitsIndex==3","colz");
  //h1->GetXaxis()->SetTitle("HGCSimHitsPosz"); h1->GetYaxis()->SetTitle("pow(HGCSimHitsPosx**2+HGCSimHitsPosy**2,0.5)"); h1->SetTitle("Right HF Nose Simhits");
  // gStyle->SetOptStat(0);
  c1->Print("Digis.pdf",".pdf");
  //c1->Print("test_h1.pdf(",".pdf");

  TCanvas *c2 = new TCanvas("c2","c2",800,600);
  c2->Divide(2,2);
  c2->cd(1);
  tree->Draw("HGCDigiLayer","HGCDigiIndex==3","colz"); // HFNose
  c2->cd(2);
  tree->Draw("HGCDigiPosx:HGCDigiPosy","HGCDigiIndex==3","colz"); // HFNose
  c2->Print("Digis2.pdf",".pdf");
  //
  //c2->Print("test.pdf)",".pdf");
    

}

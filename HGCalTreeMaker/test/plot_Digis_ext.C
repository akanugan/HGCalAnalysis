{

  TFile *_file0 = TFile::Open("ntupleDigis_ttbar_D31.root");
  TTree *tree = (TTree*)_file0->Get("hgcalTupleTree/tree");

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  // c1->Divide(2,2);
  //c1->Print("test.pdf(",".pdf");
  //c1->cd(1);
  TH2F* h1 = new TH2F("h1","h1",100,1020,1120,160,0,160);
  h1->GetXaxis()->SetTitle("HGCDigiPosz");
  h1->GetYaxis()->SetTitle("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5)");
  h1->SetTitle("Right HF Nose Digis");  
  gStyle->SetOptStat(0);
  //c1->cd(1);
  // tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==0","colz");
  //c1->cd(2);
  //tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==1","colz");
  //c1->cd(3);
  //tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==2","colz");
  //c1->cd(4);
  //tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz","HGCDigiIndex==3","colz");
   tree->Draw("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5):HGCDigiPosz>>h1","HGCDigiIndex==3","colz");
   //h1->GetXaxis()->SetLabel("HGCDigiPosz"); 
   // h1->GetYaxis()->SetLabel("pow(HGCDigiPosx**2+HGCDigiPosy**2,0.5)");
   //h1->SetTitle("Right HF Nose Digis");
  // gStyle->SetOptStat(0);
  c1->Print("Digis_Rext.pdf",".pdf");
  //c1->Print("test_h1.pdf(",".pdf");

  //TCanvas *c2 = new TCanvas("c2","c2",800,600);
  //c2->Divide(2,2);
  //c2->cd(1);
  //tree->Draw("HGCDigiLayer","HGCDigiIndex==3","colz"); // HFNose
  //c2->cd(2);
  //tree->Draw("HGCDigiPosx:HGCDigiPosy","HGCDigiIndex==3","colz"); // HFNose
  //c2->Print("Digis2.pdf",".pdf");
  //
  //c2->Print("test.pdf)",".pdf");
    

}

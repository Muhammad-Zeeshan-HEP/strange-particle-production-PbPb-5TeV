#ifdef __CLING__
#pragma cling optimize(0)
#endif
void mean_pt_vs_mass_radialflow()
{
//=========Macro generated from canvas: mean_pt_vs_mass_radialflow/Alice Figure Template
//=========  (Fri May 29 20:32:54 2026) by ROOT version 6.36.12
   TCanvas *mean_pt_vs_mass_radialflow = new TCanvas("mean_pt_vs_mass_radialflow", "Alice Figure Template", 67, 77, 1678, 1003);
   gStyle->SetOptFit(0);
   gStyle->SetOptStat(1111);
   gStyle->SetOptTitle(1);
   TColor::SetPalette(57, nullptr);
   mean_pt_vs_mass_radialflow->Range(-0.25,-0.225,2.25,2.025);
   mean_pt_vs_mass_radialflow->SetFillColor(0);
   mean_pt_vs_mass_radialflow->SetBorderMode(0);
   mean_pt_vs_mass_radialflow->SetBorderSize(2);
   mean_pt_vs_mass_radialflow->SetTickx(1);
   mean_pt_vs_mass_radialflow->SetTicky(1);
   mean_pt_vs_mass_radialflow->SetFrameBorderMode(0);
   mean_pt_vs_mass_radialflow->SetFrameBorderMode(0);
   
   TH1F *hframe__2 = new TH1F("hframe__2", "", 1000, 0, 2);
   hframe__2->SetMinimum(0);
   hframe__2->SetMaximum(1.8);
   hframe__2->SetDirectory(nullptr);
   hframe__2->SetStats(0);
   hframe__2->SetLineColor(TColor::GetColor("#000099"));
   hframe__2->GetXaxis()->SetTitle("m (GeV/c^{2})");
   hframe__2->GetXaxis()->SetLabelFont(42);
   hframe__2->GetXaxis()->SetLabelOffset(0.003000000026077032);
   hframe__2->GetXaxis()->SetLabelSize(0.04100000113248825);
   hframe__2->GetXaxis()->SetTitleSize(0.04500000178813934);
   hframe__2->GetXaxis()->SetTitleOffset(0.949999988079071);
   hframe__2->GetXaxis()->SetTitleFont(42);
   hframe__2->GetYaxis()->SetTitle(" #LT #it{p}_{T} #GT (GeV/c)");
   hframe__2->GetYaxis()->SetLabelFont(42);
   hframe__2->GetYaxis()->SetLabelOffset(0.003000000026077032);
   hframe__2->GetYaxis()->SetLabelSize(0.04100000113248825);
   hframe__2->GetYaxis()->SetTitleSize(0.04500000178813934);
   hframe__2->GetYaxis()->SetTitleOffset(0.949999988079071);
   hframe__2->GetYaxis()->SetTitleFont(42);
   hframe__2->GetZaxis()->SetLabelFont(42);
   hframe__2->GetZaxis()->SetTitleOffset(1);
   hframe__2->GetZaxis()->SetTitleFont(42);
   hframe__2->Draw(" ");
   
   std::vector<Double_t> gre_fx_vect40{ 0.497611 };
   std::vector<Double_t> gre_fy_vect41{ 0.5051 };
   std::vector<Double_t> gre_fex_vect42{ 0 };
   std::vector<Double_t> gre_fey_vect43{ 0.04 };
   TGraphErrors *gre = new TGraphErrors(1, gre_fx_vect40.data(), gre_fy_vect41.data(), gre_fex_vect42.data(), gre_fey_vect43.data());
   gre->SetName("gALICE03");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#0000ff"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram11 = new TH1F("Graph_histogram11", "", 100, 0.397611, 1.597611);
   Graph_histogram11->SetMinimum(0.4571);
   Graph_histogram11->SetMaximum(0.5531);
   Graph_histogram11->SetDirectory(nullptr);
   Graph_histogram11->SetStats(0);
   Graph_histogram11->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram11->GetXaxis()->SetLabelFont(42);
   Graph_histogram11->GetXaxis()->SetTitleOffset(1);
   Graph_histogram11->GetXaxis()->SetTitleFont(42);
   Graph_histogram11->GetYaxis()->SetLabelFont(42);
   Graph_histogram11->GetYaxis()->SetTitleFont(42);
   Graph_histogram11->GetZaxis()->SetLabelFont(42);
   Graph_histogram11->GetZaxis()->SetTitleOffset(1);
   Graph_histogram11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram11);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect44{ 1.115683 };
   std::vector<Double_t> gre_fy_vect45{ 0.6959 };
   std::vector<Double_t> gre_fex_vect46{ 0 };
   std::vector<Double_t> gre_fey_vect47{ 0.05 };
   gre = new TGraphErrors(1, gre_fx_vect44.data(), gre_fy_vect45.data(), gre_fex_vect46.data(), gre_fey_vect47.data());
   gre->SetName("gALICE04");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#ff0000"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram12 = new TH1F("Graph_histogram12", "", 100, 1.015683, 2.215683);
   Graph_histogram12->SetMinimum(0.6358999999999999);
   Graph_histogram12->SetMaximum(0.7559);
   Graph_histogram12->SetDirectory(nullptr);
   Graph_histogram12->SetStats(0);
   Graph_histogram12->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram12->GetXaxis()->SetLabelFont(42);
   Graph_histogram12->GetXaxis()->SetTitleOffset(1);
   Graph_histogram12->GetXaxis()->SetTitleFont(42);
   Graph_histogram12->GetYaxis()->SetLabelFont(42);
   Graph_histogram12->GetYaxis()->SetTitleFont(42);
   Graph_histogram12->GetZaxis()->SetLabelFont(42);
   Graph_histogram12->GetZaxis()->SetTitleOffset(1);
   Graph_histogram12->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram12);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect48{ 1.32171 };
   std::vector<Double_t> gre_fy_vect49{ 0.9085 };
   std::vector<Double_t> gre_fex_vect50{ 0 };
   std::vector<Double_t> gre_fey_vect51{ 0.06 };
   gre = new TGraphErrors(1, gre_fx_vect48.data(), gre_fy_vect49.data(), gre_fex_vect50.data(), gre_fey_vect51.data());
   gre->SetName("gALICE05");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#009999"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram13 = new TH1F("Graph_histogram13", "", 100, 1.22171, 2.42171);
   Graph_histogram13->SetMinimum(0.8365);
   Graph_histogram13->SetMaximum(0.9804999999999999);
   Graph_histogram13->SetDirectory(nullptr);
   Graph_histogram13->SetStats(0);
   Graph_histogram13->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram13->GetXaxis()->SetLabelFont(42);
   Graph_histogram13->GetXaxis()->SetTitleOffset(1);
   Graph_histogram13->GetXaxis()->SetTitleFont(42);
   Graph_histogram13->GetYaxis()->SetLabelFont(42);
   Graph_histogram13->GetYaxis()->SetTitleFont(42);
   Graph_histogram13->GetZaxis()->SetLabelFont(42);
   Graph_histogram13->GetZaxis()->SetTitleOffset(1);
   Graph_histogram13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram13);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect52{ 0.497611, 1.115683, 1.32171 };
   std::vector<Double_t> gre_fy_vect53{ 0.5185, 0.8715000000000001, 1.343 };
   std::vector<Double_t> gre_fex_vect54{ 0, 0, 0 };
   std::vector<Double_t> gre_fey_vect55{ 0.0185, 0.0265, 0.0335 };
   gre = new TGraphErrors(3, gre_fx_vect52.data(), gre_fy_vect53.data(), gre_fex_vect54.data(), gre_fey_vect55.data());
   gre->SetName("gALICE05pbpb");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#999999"));
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(2.2);
   
   TH1F *Graph_histogram14 = new TH1F("Graph_histogram14", "", 100, 0.4152011, 1.4041199);
   Graph_histogram14->SetMinimum(0.4123499999999999);
   Graph_histogram14->SetMaximum(1.46415);
   Graph_histogram14->SetDirectory(nullptr);
   Graph_histogram14->SetStats(0);
   Graph_histogram14->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram14->GetXaxis()->SetLabelFont(42);
   Graph_histogram14->GetXaxis()->SetTitleOffset(1);
   Graph_histogram14->GetXaxis()->SetTitleFont(42);
   Graph_histogram14->GetYaxis()->SetLabelFont(42);
   Graph_histogram14->GetYaxis()->SetTitleFont(42);
   Graph_histogram14->GetZaxis()->SetLabelFont(42);
   Graph_histogram14->GetZaxis()->SetTitleOffset(1);
   Graph_histogram14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram14);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect56{ 0.497611 };
   std::vector<Double_t> gre_fy_vect57{ 0.5051 };
   std::vector<Double_t> gre_fex_vect58{ 0 };
   std::vector<Double_t> gre_fey_vect59{ 0.04 };
   gre = new TGraphErrors(1, gre_fx_vect56.data(), gre_fy_vect57.data(), gre_fex_vect58.data(), gre_fey_vect59.data());
   gre->SetName("gALICE03");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#0000ff"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram15 = new TH1F("Graph_histogram15", "", 100, 0.397611, 1.597611);
   Graph_histogram15->SetMinimum(0.4571);
   Graph_histogram15->SetMaximum(0.5531);
   Graph_histogram15->SetDirectory(nullptr);
   Graph_histogram15->SetStats(0);
   Graph_histogram15->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram15->GetXaxis()->SetLabelFont(42);
   Graph_histogram15->GetXaxis()->SetTitleOffset(1);
   Graph_histogram15->GetXaxis()->SetTitleFont(42);
   Graph_histogram15->GetYaxis()->SetLabelFont(42);
   Graph_histogram15->GetYaxis()->SetTitleFont(42);
   Graph_histogram15->GetZaxis()->SetLabelFont(42);
   Graph_histogram15->GetZaxis()->SetTitleOffset(1);
   Graph_histogram15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram15);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect60{ 1.115683 };
   std::vector<Double_t> gre_fy_vect61{ 0.6959 };
   std::vector<Double_t> gre_fex_vect62{ 0 };
   std::vector<Double_t> gre_fey_vect63{ 0.05 };
   gre = new TGraphErrors(1, gre_fx_vect60.data(), gre_fy_vect61.data(), gre_fex_vect62.data(), gre_fey_vect63.data());
   gre->SetName("gALICE04");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#ff0000"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram16 = new TH1F("Graph_histogram16", "", 100, 1.015683, 2.215683);
   Graph_histogram16->SetMinimum(0.6358999999999999);
   Graph_histogram16->SetMaximum(0.7559);
   Graph_histogram16->SetDirectory(nullptr);
   Graph_histogram16->SetStats(0);
   Graph_histogram16->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram16->GetXaxis()->SetLabelFont(42);
   Graph_histogram16->GetXaxis()->SetTitleOffset(1);
   Graph_histogram16->GetXaxis()->SetTitleFont(42);
   Graph_histogram16->GetYaxis()->SetLabelFont(42);
   Graph_histogram16->GetYaxis()->SetTitleFont(42);
   Graph_histogram16->GetZaxis()->SetLabelFont(42);
   Graph_histogram16->GetZaxis()->SetTitleOffset(1);
   Graph_histogram16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram16);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect64{ 1.32171 };
   std::vector<Double_t> gre_fy_vect65{ 0.9085 };
   std::vector<Double_t> gre_fex_vect66{ 0 };
   std::vector<Double_t> gre_fey_vect67{ 0.06 };
   gre = new TGraphErrors(1, gre_fx_vect64.data(), gre_fy_vect65.data(), gre_fex_vect66.data(), gre_fey_vect67.data());
   gre->SetName("gALICE05");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#009999"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram17 = new TH1F("Graph_histogram17", "", 100, 1.22171, 2.42171);
   Graph_histogram17->SetMinimum(0.8365);
   Graph_histogram17->SetMaximum(0.9804999999999999);
   Graph_histogram17->SetDirectory(nullptr);
   Graph_histogram17->SetStats(0);
   Graph_histogram17->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram17->GetXaxis()->SetLabelFont(42);
   Graph_histogram17->GetXaxis()->SetTitleOffset(1);
   Graph_histogram17->GetXaxis()->SetTitleFont(42);
   Graph_histogram17->GetYaxis()->SetLabelFont(42);
   Graph_histogram17->GetYaxis()->SetTitleFont(42);
   Graph_histogram17->GetZaxis()->SetLabelFont(42);
   Graph_histogram17->GetZaxis()->SetTitleOffset(1);
   Graph_histogram17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram17);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect68{ 0.497611 };
   std::vector<Double_t> gre_fy_vect69{ 0.5051 };
   std::vector<Double_t> gre_fex_vect70{ 0 };
   std::vector<Double_t> gre_fey_vect71{ 0.04 };
   gre = new TGraphErrors(1, gre_fx_vect68.data(), gre_fy_vect69.data(), gre_fex_vect70.data(), gre_fey_vect71.data());
   gre->SetName("gALICE03");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#0000ff"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram18 = new TH1F("Graph_histogram18", "", 100, 0.397611, 1.597611);
   Graph_histogram18->SetMinimum(0.4571);
   Graph_histogram18->SetMaximum(0.5531);
   Graph_histogram18->SetDirectory(nullptr);
   Graph_histogram18->SetStats(0);
   Graph_histogram18->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram18->GetXaxis()->SetLabelFont(42);
   Graph_histogram18->GetXaxis()->SetTitleOffset(1);
   Graph_histogram18->GetXaxis()->SetTitleFont(42);
   Graph_histogram18->GetYaxis()->SetLabelFont(42);
   Graph_histogram18->GetYaxis()->SetTitleFont(42);
   Graph_histogram18->GetZaxis()->SetLabelFont(42);
   Graph_histogram18->GetZaxis()->SetTitleOffset(1);
   Graph_histogram18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram18);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect72{ 1.115683 };
   std::vector<Double_t> gre_fy_vect73{ 0.6959 };
   std::vector<Double_t> gre_fex_vect74{ 0 };
   std::vector<Double_t> gre_fey_vect75{ 0.05 };
   gre = new TGraphErrors(1, gre_fx_vect72.data(), gre_fy_vect73.data(), gre_fex_vect74.data(), gre_fey_vect75.data());
   gre->SetName("gALICE04");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#ff0000"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram19 = new TH1F("Graph_histogram19", "", 100, 1.015683, 2.215683);
   Graph_histogram19->SetMinimum(0.6358999999999999);
   Graph_histogram19->SetMaximum(0.7559);
   Graph_histogram19->SetDirectory(nullptr);
   Graph_histogram19->SetStats(0);
   Graph_histogram19->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram19->GetXaxis()->SetLabelFont(42);
   Graph_histogram19->GetXaxis()->SetTitleOffset(1);
   Graph_histogram19->GetXaxis()->SetTitleFont(42);
   Graph_histogram19->GetYaxis()->SetLabelFont(42);
   Graph_histogram19->GetYaxis()->SetTitleFont(42);
   Graph_histogram19->GetZaxis()->SetLabelFont(42);
   Graph_histogram19->GetZaxis()->SetTitleOffset(1);
   Graph_histogram19->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram19);
   
   gre->Draw("p");
   
   std::vector<Double_t> gre_fx_vect76{ 1.32171 };
   std::vector<Double_t> gre_fy_vect77{ 0.9085 };
   std::vector<Double_t> gre_fex_vect78{ 0 };
   std::vector<Double_t> gre_fey_vect79{ 0.06 };
   gre = new TGraphErrors(1, gre_fx_vect76.data(), gre_fy_vect77.data(), gre_fex_vect78.data(), gre_fey_vect79.data());
   gre->SetName("gALICE05");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(TColor::GetColor("#009999"));
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_histogram20 = new TH1F("Graph_histogram20", "", 100, 1.22171, 2.42171);
   Graph_histogram20->SetMinimum(0.8365);
   Graph_histogram20->SetMaximum(0.9804999999999999);
   Graph_histogram20->SetDirectory(nullptr);
   Graph_histogram20->SetStats(0);
   Graph_histogram20->SetLineColor(TColor::GetColor("#000099"));
   Graph_histogram20->GetXaxis()->SetLabelFont(42);
   Graph_histogram20->GetXaxis()->SetTitleOffset(1);
   Graph_histogram20->GetXaxis()->SetTitleFont(42);
   Graph_histogram20->GetYaxis()->SetLabelFont(42);
   Graph_histogram20->GetYaxis()->SetTitleFont(42);
   Graph_histogram20->GetZaxis()->SetLabelFont(42);
   Graph_histogram20->GetZaxis()->SetTitleOffset(1);
   Graph_histogram20->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_histogram20);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.135338, 0.570435, 0.484962, 0.883478, nullptr, "brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *legentry = leg->AddEntry("gALICE05pbpb"," #it{Pb-Pb}, #sqrt{#it{s}_{NN}} = 5.02 TeV ","P");
   legentry->SetMarkerColor(TColor::GetColor("#999999"));
   legentry->SetMarkerStyle(22);
   legentry->SetMarkerSize(2.2);
   legentry->SetTextFont(42);
   leg->Draw();
   TLatex *tex = new TLatex(0.497611, 0.1819, "K^{0}_{S}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(1.11568, 0.1819, "#Lambda");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(1.32171, 0.1819, "#Xi");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   mean_pt_vs_mass_radialflow->Modified();
   mean_pt_vs_mass_radialflow->SetSelected(mean_pt_vs_mass_radialflow);
}

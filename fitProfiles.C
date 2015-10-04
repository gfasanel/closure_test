{
gROOT->ProcessLine(".include /cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-eccfad2//include");
gROOT->ProcessLine(".L macro/macro_fit.C+");
gROOT->ProcessLine(".L macro/plot_data_mc.C+");
FitProfile2("test/dato/fitres/toys/scaleStep0/0.00_0.00_0.99/EB/outProfile_ptRatio_pt2Sum_random_0.99_0.00_scaleStep0_Et_25_trigger_noPF.root","","",true,true,true);
}

//run with "root -l -b fitProfiles.C"

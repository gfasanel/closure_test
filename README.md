# closure_test

da /afs/cern.ch/user/g/gfasanel/new_version_ECALELF/CMSSW_7_5_0_pre4/src/Calibration/ZFitter


./script/justOnce/closure_test.sh 2nd (1nh)

Per ogni punto di scale/smearing vengono sottomessi 10 job, organizzati in cartelle da 1 a 10 in test/dato/fitres/toys/scaleStep0/

./script/justOnce/closure_test_fitter.sh > debug_fit.txt

fit_copy.sh

L'algoritmo di fit fa un root con tutti i profili

root -l -b fitProfiles.C

fitProfiles chiama macro/macro_fit.C::FitProfile2 che chiama sempre dentro macro_fit.C IterMinimumFit

IterMinimumFit e' la macro che fa tutto il lavoro

Poi il fit viene passato alla macro Plot che fa i disegni

in tmp/g_toBeFitted ci sono i grafici prima di essere fittatii

e anche g_fitted (dopo il fit)

# closure_test


./script/justOnce/closure_test_fitter.sh

Fa un root con tutti i profili

root -l -b fitProfiles.C

fitProfiles chiama macro/macro_fit.C::FitProfile2 che chiama sempre dentro macro_fit.C IterMinimumFit

in tmp/g_toBeFitted c'e' il grafico

e anche g_fitted

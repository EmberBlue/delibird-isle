#!/bin/bash
# The whole playthrough in order; stops at the first failing segment.
S=${SKALD_SCRATCH:-$(ls -d /tmp/claude-0/-home-user-delibird-isle/*/scratchpad | head -1)}
bash $S/play/chain_all.sh s01 > $S/play/run/chain1.log 2>&1 || { echo "chain1 failed"; exit 1; }
bash $S/play/chain2.sh s14 > $S/play/run/chain2.log 2>&1 || { echo "chain2 failed"; exit 1; }
bash $S/play/chain3.sh s26 > $S/play/run/chain3.log 2>&1 || { echo "chain3 failed"; exit 1; }
bash $S/play/chain4.sh s34 > $S/play/run/chain4.log 2>&1 || { echo "chain4 failed"; exit 1; }
bash $S/play/chain5.sh s41 > $S/play/run/chain5.log 2>&1 || { echo "chain5 failed"; exit 1; }
bash $S/play/chain6.sh s54 > $S/play/run/chain6.log 2>&1 || { echo "chain6 failed"; exit 1; }
bash $S/play/chain7.sh s61 > $S/play/run/chain7.log 2>&1 || { echo "chain7 failed"; exit 1; }
bash $S/play/chain8.sh s65 > $S/play/run/chain8.log 2>&1 || { echo "chain8 failed"; exit 1; }
bash $S/play/chain9.sh s72 > $S/play/run/chain9.log 2>&1 || { echo "chain9 failed"; exit 1; }
echo "all chains done"

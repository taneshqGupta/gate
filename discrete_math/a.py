import fitz  # pip install pymupdf

INPUT  = "propositional_logic.pdf"
OUTPUT = "final2.pdf"

# Every page number verified by visual inspection of the actual PDF
TOC = [
    [1, "Module 1: Basic Proof Techniques",                   1],
    [2,   "Conjecture & Axiom",                               1],
    [2,   "Direct Proof",                                     2],
    [2,   "Proof by Contraposition",                          7],
    [2,   "Proof by Contradiction",                          12],
    [2,   "Practice Problems",                               15],

    [1, "Module 2: Mathematical Logic & Propositions",       29],
    [2,   "Introduction to Mathematical Logic",              29],
    [2,   "Propositions & Propositional Variables",          30],
    [2,   "Atomic & Compound Propositions",                  31],

    [1, "Module 3: Logical Connectives",                     32],
    [2,   "Standard Logical Connectives (overview)",         32],
    [2,   "Negation (NOT)",                                  32],
    [2,   "Conjunction (AND)",                               33],
    [2,   "Disjunction (OR)",                                33],
    [2,   "NAND & NOR",                                      35],
    [2,   "Implication (If/Then)",                           35],
    [2,   "English Translations of Implication",             40],
    [2,   "Biconditional (Iff)",                             42],
    [2,   "Converse, Inverse & Contrapositive",              68],
    [2,   "Precedence of Logical Connectives",               49],

    [1, "Module 4: Tautology, Contradiction & Contingency",  59],
    [2,   "Definitions",                                     59],
    [2,   "Satisfiability & Validity",                       60],
    [2,   "Logical Equivalence",                             61],
    [2,   "Practice Problems",                               62],

    [1, "Module 5: Logical Laws",                            79],
    [2,   "Double Negation & Domination Laws",               79],
    [2,   "Commutative Laws",                                80],
    [2,   "Associative Laws",                                82],
    [2,   "Idempotent Laws",                                 85],
    [2,   "Distributive Laws",                               86],
    [2,   "De Morgan's Laws",                                90],
    [2,   "Simplification using Logical Laws",               95],

    [1, "Module 6: Logical Arguments",                      108],
    [2,   "Introduction to Logical Arguments",              108],
    [2,   "Valid & Invalid Arguments",                      109],
    [2,   "Modus Ponens",                                   110],
    [2,   "Analysis of Implication",                        101],
    [2,   "Rules of Inference",                             112],
    [2,   "Modus Tollens & Disjunctive Syllogism",          112],

    [1, "Module 7: Gate PYQs — Propositional Logic",        115],
    [2,   "Gate PYQs — Set 1 (Tautology & Equivalence)",   115],
    [2,   "Gate PYQs — Set 2",                             120],
    [2,   "Gate PYQs — Set 3",                             130],
    [2,   "Gate PYQs — Set 4",                             140],
    [2,   "Gate PYQs — Set 5 (Arguments)",                 150],
    [2,   "Gate PYQs — Set 6",                             162],
    [2,   "Gate PYQs — Set 7",                             168],
    [2,   "Gate PYQs — Set 8 (Final)",                     175],
]

doc = fitz.open(INPUT)
toc_zerobased = [[level, title, page] for level, title, page in TOC]
doc.set_toc(toc_zerobased)
doc.save(OUTPUT, garbage=4, deflate=True)
doc.close()
print(f"Done — saved to {OUTPUT}")

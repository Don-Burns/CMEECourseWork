rm(list=ls())
require(pwr)
d <- read.table("../data/SparrowSize.txt", header = T)
set <- subset(d, d$Wing != "NA")
data <- 5/sd(set$Wing)
pwr.t.test(d = data, power = .8, sig.level = .05, type = "one.sample")


#include "secondary_stats.h"

#include <iostream>
#include <iomanip>

int& SecondaryStats::operator[] (const std::string& stat) {
    if(stat == "closeCombat") { return closeCombat; }
    else if (stat == "cyberneticOverdrive") { return cyberneticOverdrive; }
    else if (stat == "gunslinger") { return gunslinger; }
    else if (stat == "recon") { return recon; }
    else if (stat == "fitness") { return fitness; }
    else if (stat == "synapticTolerance") { return synapticTolerance; }
    else if (stat == "negotiation") { return negotiation; }
    else if (stat == "deception") { return deception; }
    else if (stat == "hacking") { return hacking; }
    else if (stat == "engineering") { return engineering; }
    else if (stat == "stealth") { return stealth; }
    else if (stat == "kineticDrift") { return kineticDrift; }
    else { throw std::out_of_range("Invalid SecondaryStats index"); }
}

int& SecondaryStats::operator[] (const int& stat) {
    switch (stat) {
        case 0: return closeCombat;
        case 1: return cyberneticOverdrive;
        case 2: return gunslinger;
        case 3: return recon;
        case 4: return fitness;
        case 5: return synapticTolerance;
        case 6: return negotiation;
        case 7: return deception;
        case 8: return hacking;
        case 9: return engineering;
        case 10: return stealth;
        case 11: return kineticDrift;
        default: throw std::out_of_range("Invalid SecondaryStats index");
    }
}

// For const printing
int SecondaryStats::operator[](const int& stat) const {
    switch (stat) {
        case 0: return closeCombat;
        case 1: return cyberneticOverdrive;
        case 2: return gunslinger;
        case 3: return recon;
        case 4: return fitness;
        case 5: return synapticTolerance;
        case 6: return negotiation;
        case 7: return deception;
        case 8: return hacking;
        case 9: return engineering;
        case 10: return stealth;
        case 11: return kineticDrift;
        default: throw std::out_of_range("Invalid SecondaryStats index");
    }
}


void SecondaryStats::print_stats() const {
    std::cout << "+------------------------+--------+" << std::endl;
    std::cout << "| CloseCombat            | " << std::setw(6) << closeCombat << " |" << std::endl;
    std::cout << "| CyberneticOverdrive    | " << std::setw(6) << cyberneticOverdrive << " |" << std::endl;
    std::cout << "| Gunslinger             | " << std::setw(6) << gunslinger << " |" << std::endl;
    std::cout << "| Recon                  | " << std::setw(6) << recon << " |" << std::endl;
    std::cout << "| Fitness                | " << std::setw(6) << fitness << " |" << std::endl;
    std::cout << "| SynapticTolerance      | " << std::setw(6) << synapticTolerance << " |" << std::endl;
    std::cout << "| Negotiation            | " << std::setw(6) << negotiation << " |" << std::endl;
    std::cout << "| Deception              | " << std::setw(6) << deception << " |" << std::endl;
    std::cout << "| Hacking                | " << std::setw(6) << hacking << " |" << std::endl;
    std::cout << "| Engineering            | " << std::setw(6) << engineering << " |" << std::endl;
    std::cout << "| Stealth                | " << std::setw(6) << stealth << " |" << std::endl;
    std::cout << "| KineticDrift           | " << std::setw(6) << kineticDrift << " |" << std::endl;
    std::cout << "+------------------------+--------+" << std::endl;
}

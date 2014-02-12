/**
 *	@section purpose: 
 *	@author: Omar Moreno <omoreno1@ucsc.edu>
 *			 Santa Cruz Institute for Particle Physics
 *			 University of California, Santa Cruz
 *	@date: December 31, 2013
 *	@version: 1.0
 *
 */

#ifndef __HPS_EVENT_BUILDER_H__
#define __HPS_EVENT_BUILDER_H__

//--- DST ---//
//-----------//
#include <EventBuilder.h>
#include <SvtDataWriter.h>
#include <EcalDataWriter.h>
#include <MCParticleDataWriter.h>

class HpsEventBuilder : public EventBuilder {

	public: 
		HpsEventBuilder(); 
		~HpsEventBuilder(); 

		//
		void makeHpsEvent(EVENT::LCEvent*, HpsEvent*); 

		// 
		void setBField(double);

	private:

		SvtDataWriter* svt_writer; 
		EcalDataWriter* ecal_writer; 
		MCParticleDataWriter* mc_particle_writer;
};

#endif // __HPS_EVENT_BUILDER_H__


package pokerth_protocol;
//
// This file was generated by the BinaryNotes compiler.
// See http://bnotes.sourceforge.net 
// Any modifications to this file will be lost upon recompilation of the source ASN.1. 
//

import org.bn.*;
import org.bn.annotations.*;
import org.bn.annotations.constraints.*;
import org.bn.coders.*;
import org.bn.types.*;




    @ASN1PreparedElement
    @ASN1Sequence ( name = "ChatTypePrivate", isSet = false )
    public class ChatTypePrivate implements IASN1PreparedElement {
            
        @ASN1Element ( name = "playerId", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private NonZeroId playerId = null;
                
  
        
        public NonZeroId getPlayerId () {
            return this.playerId;
        }

        

        public void setPlayerId (NonZeroId value) {
            this.playerId = value;
        }
        
  
                    
        
        public void initWithDefaults() {
            
        }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(ChatTypePrivate.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            
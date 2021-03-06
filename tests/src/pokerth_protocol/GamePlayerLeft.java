
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
    @ASN1Sequence ( name = "GamePlayerLeft", isSet = false )
    public class GamePlayerLeft implements IASN1PreparedElement {
            
        @ASN1Element ( name = "playerId", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private NonZeroId playerId = null;
                
  

    @ASN1PreparedElement
    @ASN1Enum (
        name = "GamePlayerLeftReasonEnumType"
    )
    public static class GamePlayerLeftReasonEnumType implements IASN1PreparedElement {        
        public enum EnumType {
            
            @ASN1EnumItem ( name = "leftOnRequest", hasTag = true , tag = 0 )
            leftOnRequest , 
            @ASN1EnumItem ( name = "leftKicked", hasTag = true , tag = 1 )
            leftKicked , 
            @ASN1EnumItem ( name = "leftError", hasTag = true , tag = 2 )
            leftError , 
        }
        
        private EnumType value;
        private Integer integerForm;
        
        public EnumType getValue() {
            return this.value;
        }
        
        public void setValue(EnumType value) {
            this.value = value;
        }
        
        public Integer getIntegerForm() {
            return integerForm;
        }
        
        public void setIntegerForm(Integer value) {
            integerForm = value;
        }

	    public void initWithDefaults() {
	    }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(GamePlayerLeftReasonEnumType.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

    }
                
        @ASN1Element ( name = "gamePlayerLeftReason", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private GamePlayerLeftReasonEnumType gamePlayerLeftReason = null;
                
  
        
        public NonZeroId getPlayerId () {
            return this.playerId;
        }

        

        public void setPlayerId (NonZeroId value) {
            this.playerId = value;
        }
        
  
        
        public GamePlayerLeftReasonEnumType getGamePlayerLeftReason () {
            return this.gamePlayerLeftReason;
        }

        

        public void setGamePlayerLeftReason (GamePlayerLeftReasonEnumType value) {
            this.gamePlayerLeftReason = value;
        }
        
  
                    
        
        public void initWithDefaults() {
            
        }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(GamePlayerLeft.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            
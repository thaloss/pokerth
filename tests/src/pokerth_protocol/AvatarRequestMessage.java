
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
    @ASN1BoxedType ( name = "AvatarRequestMessage" )
    public class AvatarRequestMessage implements IASN1PreparedElement {
                
        

       @ASN1PreparedElement
       @ASN1Sequence ( name = "AvatarRequestMessage" , isSet = false )
       public static class AvatarRequestMessageSequenceType implements IASN1PreparedElement {
                
        @ASN1Element ( name = "requestId", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private NonZeroId requestId = null;
                
  
        @ASN1Element ( name = "avatar", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private AvatarHash avatar = null;
                
  
        
        public NonZeroId getRequestId () {
            return this.requestId;
        }

        

        public void setRequestId (NonZeroId value) {
            this.requestId = value;
        }
        
  
        
        public AvatarHash getAvatar () {
            return this.avatar;
        }

        

        public void setAvatar (AvatarHash value) {
            this.avatar = value;
        }
        
  
                
                
        public void initWithDefaults() {
            
        }

        public IASN1PreparedElementData getPreparedData() {
            return preparedData_AvatarRequestMessageSequenceType;
        }

       private static IASN1PreparedElementData preparedData_AvatarRequestMessageSequenceType = CoderFactory.getInstance().newPreparedElementData(AvatarRequestMessageSequenceType.class);
                
       }

       
                
        @ASN1Element ( name = "AvatarRequestMessage", isOptional =  false , hasTag =  true, tag = 4, 
        tagClass =  TagClass.Application  , hasDefaultValue =  false  )
    
        private AvatarRequestMessageSequenceType  value;        

        
        
        public AvatarRequestMessage () {
        }
        
        
        
        public void setValue(AvatarRequestMessageSequenceType value) {
            this.value = value;
        }
        
        
        
        public AvatarRequestMessageSequenceType getValue() {
            return this.value;
        }            
        

	    public void initWithDefaults() {
	    }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(AvatarRequestMessage.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            
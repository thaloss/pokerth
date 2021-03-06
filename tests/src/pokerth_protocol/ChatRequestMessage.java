
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
    @ASN1BoxedType ( name = "ChatRequestMessage" )
    public class ChatRequestMessage implements IASN1PreparedElement {
                
        

       @ASN1PreparedElement
       @ASN1Sequence ( name = "ChatRequestMessage" , isSet = false )
       public static class ChatRequestMessageSequenceType implements IASN1PreparedElement {
                
        
    @ASN1PreparedElement
    @ASN1Choice ( name = "chatRequestType" )
    public static class ChatRequestTypeChoiceType implements IASN1PreparedElement {
            
        @ASN1Element ( name = "chatRequestTypeLobby", isOptional =  false , hasTag =  true, tag = 0 , hasDefaultValue =  false  )
    
	private ChatRequestTypeLobby chatRequestTypeLobby = null;
                
  
        @ASN1Element ( name = "chatRequestTypeGame", isOptional =  false , hasTag =  true, tag = 1 , hasDefaultValue =  false  )
    
	private ChatRequestTypeGame chatRequestTypeGame = null;
                
  
        @ASN1Element ( name = "chatRequestTypePrivate", isOptional =  false , hasTag =  true, tag = 2 , hasDefaultValue =  false  )
    
	private ChatRequestTypePrivate chatRequestTypePrivate = null;
                
  
        
        public ChatRequestTypeLobby getChatRequestTypeLobby () {
            return this.chatRequestTypeLobby;
        }

        public boolean isChatRequestTypeLobbySelected () {
            return this.chatRequestTypeLobby != null;
        }

        private void setChatRequestTypeLobby (ChatRequestTypeLobby value) {
            this.chatRequestTypeLobby = value;
        }

        
        public void selectChatRequestTypeLobby (ChatRequestTypeLobby value) {
            this.chatRequestTypeLobby = value;
            
                    setChatRequestTypeGame(null);
                
                    setChatRequestTypePrivate(null);
                            
        }

        
  
        
        public ChatRequestTypeGame getChatRequestTypeGame () {
            return this.chatRequestTypeGame;
        }

        public boolean isChatRequestTypeGameSelected () {
            return this.chatRequestTypeGame != null;
        }

        private void setChatRequestTypeGame (ChatRequestTypeGame value) {
            this.chatRequestTypeGame = value;
        }

        
        public void selectChatRequestTypeGame (ChatRequestTypeGame value) {
            this.chatRequestTypeGame = value;
            
                    setChatRequestTypeLobby(null);
                
                    setChatRequestTypePrivate(null);
                            
        }

        
  
        
        public ChatRequestTypePrivate getChatRequestTypePrivate () {
            return this.chatRequestTypePrivate;
        }

        public boolean isChatRequestTypePrivateSelected () {
            return this.chatRequestTypePrivate != null;
        }

        private void setChatRequestTypePrivate (ChatRequestTypePrivate value) {
            this.chatRequestTypePrivate = value;
        }

        
        public void selectChatRequestTypePrivate (ChatRequestTypePrivate value) {
            this.chatRequestTypePrivate = value;
            
                    setChatRequestTypeLobby(null);
                
                    setChatRequestTypeGame(null);
                            
        }

        
  

	    public void initWithDefaults() {
	    }

        public IASN1PreparedElementData getPreparedData() {
            return preparedData_ChatRequestTypeChoiceType;
        }

        private static IASN1PreparedElementData preparedData_ChatRequestTypeChoiceType = CoderFactory.getInstance().newPreparedElementData(ChatRequestTypeChoiceType.class);

    }

                
        @ASN1Element ( name = "chatRequestType", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private ChatRequestTypeChoiceType chatRequestType = null;
                
  
    @ASN1String( name = "", 
        stringType = UniversalTag.UTF8String , isUCS = false )
    @ASN1ValueRangeConstraint ( 
		
		min = 1L, 
		
		max = 128L 
		
	   )
	   
        @ASN1Element ( name = "chatText", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private String chatText = null;
                
  
        
        public ChatRequestTypeChoiceType getChatRequestType () {
            return this.chatRequestType;
        }

        

        public void setChatRequestType (ChatRequestTypeChoiceType value) {
            this.chatRequestType = value;
        }
        
  
        
        public String getChatText () {
            return this.chatText;
        }

        

        public void setChatText (String value) {
            this.chatText = value;
        }
        
  
                
                
        public void initWithDefaults() {
            
        }

        public IASN1PreparedElementData getPreparedData() {
            return preparedData_ChatRequestMessageSequenceType;
        }

       private static IASN1PreparedElementData preparedData_ChatRequestMessageSequenceType = CoderFactory.getInstance().newPreparedElementData(ChatRequestMessageSequenceType.class);
                
       }

       
                
        @ASN1Element ( name = "ChatRequestMessage", isOptional =  false , hasTag =  true, tag = 129, 
        tagClass =  TagClass.Application  , hasDefaultValue =  false  )
    
        private ChatRequestMessageSequenceType  value;        

        
        
        public ChatRequestMessage () {
        }
        
        
        
        public void setValue(ChatRequestMessageSequenceType value) {
            this.value = value;
        }
        
        
        
        public ChatRequestMessageSequenceType getValue() {
            return this.value;
        }            
        

	    public void initWithDefaults() {
	    }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(ChatRequestMessage.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            

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
    @ASN1Sequence ( name = "PlayerInfoData", isSet = false )
    public class PlayerInfoData implements IASN1PreparedElement {
            
    @ASN1String( name = "", 
        stringType = UniversalTag.UTF8String , isUCS = false )
    @ASN1ValueRangeConstraint ( 
		
		min = 1L, 
		
		max = 32L 
		
	   )
	   
        @ASN1Element ( name = "playerName", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private String playerName = null;
                
  @ASN1Boolean( name = "" )
    
        @ASN1Element ( name = "isHuman", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private Boolean isHuman = null;
                
  
        @ASN1Element ( name = "playerRights", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private PlayerInfoRights playerRights = null;
                
  
    @ASN1String( name = "", 
        stringType = UniversalTag.UTF8String , isUCS = false )
    
            @ASN1SizeConstraint ( max = 2L )
        
        @ASN1Element ( name = "countryCode", isOptional =  true , hasTag =  false  , hasDefaultValue =  false  )
    
	private String countryCode = null;
                
  

       @ASN1PreparedElement
       @ASN1Sequence ( name = "avatarData" , isSet = false )
       public static class AvatarDataSequenceType implements IASN1PreparedElement {
                
        @ASN1Element ( name = "avatarType", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private NetAvatarType avatarType = null;
                
  
        @ASN1Element ( name = "avatar", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private AvatarHash avatar = null;
                
  
        
        public NetAvatarType getAvatarType () {
            return this.avatarType;
        }

        

        public void setAvatarType (NetAvatarType value) {
            this.avatarType = value;
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
            return preparedData_AvatarDataSequenceType;
        }

       private static IASN1PreparedElementData preparedData_AvatarDataSequenceType = CoderFactory.getInstance().newPreparedElementData(AvatarDataSequenceType.class);
                
       }

       
                
        @ASN1Element ( name = "avatarData", isOptional =  true , hasTag =  false  , hasDefaultValue =  false  )
    
	private AvatarDataSequenceType avatarData = null;
                
  
        
        public String getPlayerName () {
            return this.playerName;
        }

        

        public void setPlayerName (String value) {
            this.playerName = value;
        }
        
  
        
        public Boolean getIsHuman () {
            return this.isHuman;
        }

        

        public void setIsHuman (Boolean value) {
            this.isHuman = value;
        }
        
  
        
        public PlayerInfoRights getPlayerRights () {
            return this.playerRights;
        }

        

        public void setPlayerRights (PlayerInfoRights value) {
            this.playerRights = value;
        }
        
  
        
        public String getCountryCode () {
            return this.countryCode;
        }

        
        public boolean isCountryCodePresent () {
            return this.countryCode != null;
        }
        

        public void setCountryCode (String value) {
            this.countryCode = value;
        }
        
  
        
        public AvatarDataSequenceType getAvatarData () {
            return this.avatarData;
        }

        
        public boolean isAvatarDataPresent () {
            return this.avatarData != null;
        }
        

        public void setAvatarData (AvatarDataSequenceType value) {
            this.avatarData = value;
        }
        
  
                    
        
        public void initWithDefaults() {
            
        }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(PlayerInfoData.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            
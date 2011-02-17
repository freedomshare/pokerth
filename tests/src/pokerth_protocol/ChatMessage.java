
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
    @ASN1BoxedType ( name = "ChatMessage" )
    public class ChatMessage implements IASN1PreparedElement {
                
        

       @ASN1PreparedElement
       @ASN1Sequence ( name = "ChatMessage" , isSet = false )
       public static class ChatMessageSequenceType implements IASN1PreparedElement {
                
        
    @ASN1PreparedElement
    @ASN1Choice ( name = "chatType" )
    public static class ChatTypeChoiceType implements IASN1PreparedElement {
            
        @ASN1Element ( name = "chatTypeLobby", isOptional =  false , hasTag =  true, tag = 0 , hasDefaultValue =  false  )
    
	private ChatTypeLobby chatTypeLobby = null;
                
  
        @ASN1Element ( name = "chatTypeGame", isOptional =  false , hasTag =  true, tag = 1 , hasDefaultValue =  false  )
    
	private ChatTypeGame chatTypeGame = null;
                
  
        @ASN1Element ( name = "chatTypeBot", isOptional =  false , hasTag =  true, tag = 2 , hasDefaultValue =  false  )
    
	private ChatTypeBot chatTypeBot = null;
                
  
        @ASN1Element ( name = "chatTypeBroadcast", isOptional =  false , hasTag =  true, tag = 3 , hasDefaultValue =  false  )
    
	private ChatTypeBroadcast chatTypeBroadcast = null;
                
  
        @ASN1Element ( name = "chatTypePrivate", isOptional =  false , hasTag =  true, tag = 4 , hasDefaultValue =  false  )
    
	private ChatTypePrivate chatTypePrivate = null;
                
  
        
        public ChatTypeLobby getChatTypeLobby () {
            return this.chatTypeLobby;
        }

        public boolean isChatTypeLobbySelected () {
            return this.chatTypeLobby != null;
        }

        private void setChatTypeLobby (ChatTypeLobby value) {
            this.chatTypeLobby = value;
        }

        
        public void selectChatTypeLobby (ChatTypeLobby value) {
            this.chatTypeLobby = value;
            
                    setChatTypeGame(null);
                
                    setChatTypeBot(null);
                
                    setChatTypeBroadcast(null);
                
                    setChatTypePrivate(null);
                            
        }

        
  
        
        public ChatTypeGame getChatTypeGame () {
            return this.chatTypeGame;
        }

        public boolean isChatTypeGameSelected () {
            return this.chatTypeGame != null;
        }

        private void setChatTypeGame (ChatTypeGame value) {
            this.chatTypeGame = value;
        }

        
        public void selectChatTypeGame (ChatTypeGame value) {
            this.chatTypeGame = value;
            
                    setChatTypeLobby(null);
                
                    setChatTypeBot(null);
                
                    setChatTypeBroadcast(null);
                
                    setChatTypePrivate(null);
                            
        }

        
  
        
        public ChatTypeBot getChatTypeBot () {
            return this.chatTypeBot;
        }

        public boolean isChatTypeBotSelected () {
            return this.chatTypeBot != null;
        }

        private void setChatTypeBot (ChatTypeBot value) {
            this.chatTypeBot = value;
        }

        
        public void selectChatTypeBot (ChatTypeBot value) {
            this.chatTypeBot = value;
            
                    setChatTypeLobby(null);
                
                    setChatTypeGame(null);
                
                    setChatTypeBroadcast(null);
                
                    setChatTypePrivate(null);
                            
        }

        
  
        
        public ChatTypeBroadcast getChatTypeBroadcast () {
            return this.chatTypeBroadcast;
        }

        public boolean isChatTypeBroadcastSelected () {
            return this.chatTypeBroadcast != null;
        }

        private void setChatTypeBroadcast (ChatTypeBroadcast value) {
            this.chatTypeBroadcast = value;
        }

        
        public void selectChatTypeBroadcast (ChatTypeBroadcast value) {
            this.chatTypeBroadcast = value;
            
                    setChatTypeLobby(null);
                
                    setChatTypeGame(null);
                
                    setChatTypeBot(null);
                
                    setChatTypePrivate(null);
                            
        }

        
  
        
        public ChatTypePrivate getChatTypePrivate () {
            return this.chatTypePrivate;
        }

        public boolean isChatTypePrivateSelected () {
            return this.chatTypePrivate != null;
        }

        private void setChatTypePrivate (ChatTypePrivate value) {
            this.chatTypePrivate = value;
        }

        
        public void selectChatTypePrivate (ChatTypePrivate value) {
            this.chatTypePrivate = value;
            
                    setChatTypeLobby(null);
                
                    setChatTypeGame(null);
                
                    setChatTypeBot(null);
                
                    setChatTypeBroadcast(null);
                            
        }

        
  

	    public void initWithDefaults() {
	    }

        public IASN1PreparedElementData getPreparedData() {
            return preparedData_ChatTypeChoiceType;
        }

        private static IASN1PreparedElementData preparedData_ChatTypeChoiceType = CoderFactory.getInstance().newPreparedElementData(ChatTypeChoiceType.class);

    }

                
        @ASN1Element ( name = "chatType", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private ChatTypeChoiceType chatType = null;
                
  
    @ASN1String( name = "", 
        stringType = UniversalTag.UTF8String , isUCS = false )
    @ASN1ValueRangeConstraint ( 
		
		min = 1L, 
		
		max = 128L 
		
	   )
	   
        @ASN1Element ( name = "chatText", isOptional =  false , hasTag =  false  , hasDefaultValue =  false  )
    
	private String chatText = null;
                
  
        
        public ChatTypeChoiceType getChatType () {
            return this.chatType;
        }

        

        public void setChatType (ChatTypeChoiceType value) {
            this.chatType = value;
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
            return preparedData_ChatMessageSequenceType;
        }

       private static IASN1PreparedElementData preparedData_ChatMessageSequenceType = CoderFactory.getInstance().newPreparedElementData(ChatMessageSequenceType.class);
                
       }

       
                
        @ASN1Element ( name = "ChatMessage", isOptional =  false , hasTag =  true, tag = 130, 
        tagClass =  TagClass.Application  , hasDefaultValue =  false  )
    
        private ChatMessageSequenceType  value;        

        
        
        public ChatMessage () {
        }
        
        
        
        public void setValue(ChatMessageSequenceType value) {
            this.value = value;
        }
        
        
        
        public ChatMessageSequenceType getValue() {
            return this.value;
        }            
        

	    public void initWithDefaults() {
	    }

        private static IASN1PreparedElementData preparedData = CoderFactory.getInstance().newPreparedElementData(ChatMessage.class);
        public IASN1PreparedElementData getPreparedData() {
            return preparedData;
        }

            
    }
            
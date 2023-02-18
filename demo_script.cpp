function loadAddOn(event) {
  var accessToken = event.gmail.accessToken;
  var messageId = event.gmail.messageId;
  GmailApp.setCurrentMessageAccessToken(accessToken);
  var mailMessage = GmailApp.getMessageById(messageId);
  var from = mailMessage.getFrom();

  var openDocButton = CardService.newTextButton()
      .setText("open docs")
      .setOpenLink(
          CardService.newOpenLink().setUrl("https://developers.google.com/gmail/add-ons/"));

  var card = CardService.newCardBuilder()
      .setHeader(CardService.newCardHeader().setTitle("My First Gmail Addon"))
      .addSection(CardService.newCardSection()
          .addWidget(CardService.newTextParagraph().setText("The email is from: " + from))
          .addWidget(openDocButton))
      .build();

  return [card];
}

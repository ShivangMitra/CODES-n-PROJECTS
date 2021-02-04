import 'package:flutter/material.dart';
import 'quote.dart';
import 'quote_card.dart';

void main() {
  runApp(MaterialApp(
    home: QuoteList(),
  ));
}

class QuoteList extends StatefulWidget {
  @override
  _QuoteListState createState() => _QuoteListState();
}

class _QuoteListState extends State<QuoteList> {
  List<Quote> quotes = [
    Quote(
        author: "Wild Oscar",
        text: "Be yourself, everyone else is already taken"),
    Quote(author: "Eren Yaeger", text: "I have nothing to declare except war"),
    Quote(
        author: "Chintu Prasad",
        text: "The truth is rarely pure and never simple"),
  ];

  // Widget quoteTemplate(quote) {
  //   return QuoteCard(quote: quote);
  // }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[200],
      appBar: AppBar(
        backgroundColor: Colors.redAccent,
        title: Text("Quotes"),
        centerTitle: true,
      ),
      body: Column(
        children: quotes
            .map((quote) => QuoteCard(
                  quote: quote,
                  delete: () {
                    setState(() {
                      quotes.remove(quote);
                    });
                  },
                ))
            // .map((quote) => quoteTemplate(quote))
            // .map((quote) => Text("${quote.text} - ${quote.author}"))
            .toList(),
      ),
    );
  }
}

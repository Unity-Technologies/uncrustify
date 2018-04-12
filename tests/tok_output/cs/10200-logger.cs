Line [Token]             Text
1    [COMMENT_CPP]       // Turning on sp_inside_braces=add fixes it, but also changes a lot of initializer code we don't want to touch (like x = {1}). May need special support, or perhaps there's a bug..
1    [NEWLINE]           
2    [COMMENT_CPP]       // long comment line(s), such as here, might be too long to produce a correct LOG-file such as
2    [NEWLINE]           
3    [COMMENT_CPP]       // with the use of option -L A
3    [NEWLINE]           
4    [COMMENT_CPP]       // in such a case, the output of the log will be cut.
4    [NEWLINE]           
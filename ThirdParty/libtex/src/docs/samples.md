---
title: Code Samples
---

# Code Samples

## Writing your first Latex document

```c
#include <tex/tex.h>
#include <stdio.h>

tex_error_t   err = TEX_ENONE;
tex_document *doc = document_create(&err);

tex_error_t write_err = document_fs_write_default(doc);
if (write_err != TEX_ENONE) {
    printf("Failed to write document: error code %d\n", write_err);
}
```

## Document Metadata

### Including title, author and date information

## Comments

### Creating Comments

### Adding Comments


## Lists

### Creating Lists

### Adding Lists


## Tables 

### Creating tables

### Adding Tables


## Chapters and sections

### Creating Chapters and sections


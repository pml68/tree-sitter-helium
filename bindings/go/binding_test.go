package tree_sitter_helium_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-helium"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_helium.Language())
	if language == nil {
		t.Errorf("Error loading Helium grammar")
	}
}

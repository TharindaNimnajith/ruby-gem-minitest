#include "ruby_gem_minitest.h"

VALUE rb_mRubyGemMinitest;

void
Init_ruby_gem_minitest(void)
{
  rb_mRubyGemMinitest = rb_define_module("RubyGemMinitest");
}

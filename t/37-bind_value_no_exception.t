#!/usr/bin/env perl

use strict;
use warnings;

use Test::More;

use JavaScript;

my (undef, $version) = JavaScript->get_engine_version(); 

plan tests => 2;

my $rt = JavaScript::Runtime->new;
my $cx = $rt->create_context;
$cx->eval("1");
ok(!$@,"no exception set");
$cx->bind_value("foo" => 1);
ok(!$@,"no exception set");

package JavaScript::Generator;

use strict;
use warnings;

use base 'JavaScript::Boxed';

my $NF = undef;

sub next {
  my $self = shift;

  ## this just gives a function we can use to do all the hard work...
  my $NF   ||= $self->context->eval(q!function(aGenerator) { var n = aGenerator.next(); return n; }!);

  return $NF->( $self );
}


1;

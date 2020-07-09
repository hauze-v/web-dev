const poke_container = document.getElementById('poke_container');
const pokemons_number = 150;

const fetchPokemons = async () => {
  for(let i=1; i<=pokemons_number; i++) {
    await getPokemon(i);
  }
}

const getPokemon = async id => {
  const url = `https://pokeapi.co/api/v2/pokemon${id}`;
  const res = await fetch(url);
  const pokemon = res.json();
  createPokemonCard(pokemon);
}

fetchPokemons();

function createPokemonCard(pokemon) {
  const pokemonEl = document.createElement('div');
  pokemonEl.classList.add('pokemon');

  const pokeInnerHTML = `
    ${pokemon.id}
  
  `;

  pokemonEl.innerHTML = pokeInnerHTML; 

  poke_container.appendCHild(pokemonEl);
}
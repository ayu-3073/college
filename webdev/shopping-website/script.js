
const products = [
  { 
    id: 1, 
    name: 'Focus Wireless Headphones', 
    category: 'Electronics', 
    price: 2499, 
    image: 'https://images.unsplash.com/photo-1505740420928-5e560c06d30e?auto=format&fit=crop&w=700&q=80', 
    description: 'Comfortable over-ear headphones with rich sound and all-day battery life.' 
  },
  { 
    id: 2, 
    name: 'Classic Cotton Tee', 
    category: 'Fashion', 
    price: 699, 
    image: 'https://images.unsplash.com/photo-1521572163474-6864f9cf17ab?auto=format&fit=crop&w=700&q=80', 
    description: 'A soft, reliable cotton tee with a relaxed fit for every day.' 
  },
  { 
    id: 3, 
    name: 'Stoneware Coffee Mug', 
    category: 'Home', 
    price: 499, 
    image: 'https://images.unsplash.com/photo-1514228742587-6b1558fcca3d?auto=format&fit=crop&w=700&q=80', 
    description: 'A handcrafted-style mug that makes the morning ritual better.' 
  },
  { 
    id: 4, 
    name: 'Everyday Canvas Tote', 
    category: 'Accessories', 
    price: 799, 
    image: 'https://images.unsplash.com/photo-1553062407-98eeb64c6a62?auto=format&fit=crop&w=700&q=80', 
    description: 'A roomy canvas tote for groceries, books and everything between.' 
  },
  { 
    id: 5, 
    name: 'Glow Desk Lamp', 
    category: 'Home', 
    price: 1499, 
    image: 'https://images.unsplash.com/photo-1507473885765-e6ed057f782c?auto=format&fit=crop&w=700&q=80', 
    description: 'Warm, adjustable light for focused work and cozy evenings.' 
  },
  { 
    id: 6, 
    name: 'Pocket Power Bank', 
    category: 'Electronics', 
    price: 1199, 
    image: 'https://images.unsplash.com/photo-1760708825913-65a50b3dc39b?q=80&w=1074&auto=format&fit=crop&ixlib=rb-4.1.0&ixid=NHwxMjA3fDA%3D', 
    description: 'Compact power for your phone when the day runs long.' 
  },
  { 
    id: 7, 
    name: 'Minimal Steel Watch', 
    category: 'Accessories', 
    price: 1899, 
    image: 'https://images.unsplash.com/photo-1524805444758-089113d48a6d?auto=format&fit=crop&w=700&q=80', 
    description: 'A clean, classic timepiece with a comfortable metal strap.' 
  },
  { 
    id: 8, 
    name: 'Linen Throw Cushion', 
    category: 'Home', 
    price: 899, 
    image: 'https://images.unsplash.com/photo-1584100936595-c0654b55a2e2?auto=format&fit=crop&w=700&q=80', 
    description: 'A textured cushion cover to add softness to your favorite corner.' 
  }
];

let cart = JSON.parse(localStorage.getItem('shopease-cart')) || [];



const money = amount => `₹${amount.toLocaleString('en-IN')}`;

const productCard = product => `
  <article class="product-card">
    <img class="product-image" src="${product.image}" alt="${product.name}">
    <div class="product-info">
      <span class="product-category">${product.category}</span>
      <h3 class="product-name">${product.name}</h3>
      <button class="details-button" data-details="${product.id}">Quick details</button>
      <div class="product-bottom">
        <span class="product-price">${money(product.price)}</span>
        <button class="add-to-cart" data-add="${product.id}">Add to bag</button>
      </div>
    </div>
  </article>
`;

function renderProducts(list = products) {
  const allList = document.querySelector('[data-product-list="all"]');
  const featuredList = document.querySelector('[data-product-list="featured"]');

  if (allList) {
    allList.innerHTML = list.map(productCard).join('');
    document.querySelector('.results-count').textContent = `${list.length} product${list.length !== 1 ? 's' : ''} found`;
    document.querySelector('.no-results').hidden = list.length !== 0;
  }

  if (featuredList) {
    featuredList.innerHTML = products.slice(0, 4).map(productCard).join('');
  }
}

function saveCart() {
  localStorage.setItem('shopease-cart', JSON.stringify(cart));
}

function updateCart() {
  const totalItems = cart.reduce((sum, item) => sum + item.quantity, 0);
  const totalPrice = cart.reduce((sum, item) => sum + item.price * item.quantity, 0);

  document.querySelectorAll('.cart-count').forEach(el => el.textContent = totalItems);
  document.querySelectorAll('.cart-total').forEach(el => el.textContent = money(totalPrice));

  document.querySelectorAll('.cart-items').forEach(container => {
    container.innerHTML = cart.length 
      ? cart.map(item => `
          <div class="cart-item">
            <img src="${item.image}" alt="${item.name}">
            <div>
              <h3>${item.name}</h3>
              <p>${money(item.price)} × ${item.quantity}</p>
            </div>
            <button class="remove-item" data-remove="${item.id}">Remove</button>
          </div>
        `).join('') 
      : '<p class="empty-cart">Your bag is waiting for its first find.</p>';
  });

  saveCart();
}



function addToCart(id) {
  const product = products.find(item => item.id === id);
  const existing = cart.find(item => item.id === id);

  if (existing) {
    existing.quantity++;
  } else {
    cart.push({ ...product, quantity: 1 });
  }

  updateCart();
  showToast(`${product.name} added to your bag`);
}

function removeFromCart(id) {
  cart = cart.filter(item => item.id !== id);
  updateCart();
}

function showToast(message) {
  const toast = document.querySelector('.toast');
  toast.textContent = message;
  toast.classList.add('show');
  setTimeout(() => toast.classList.remove('show'), 2600);
}

function openDetails(id) {
  const product = products.find(item => item.id === id);
  const modal = document.querySelector('.product-modal');

  modal.querySelector('.modal-content').innerHTML = `
    <img src="${product.image}" alt="${product.name}">
    <div class="modal-copy">
      <span class="product-category">${product.category}</span>
      <h2>${product.name}</h2>
      <strong>${money(product.price)}</strong>
      <p>${product.description}</p>
      <button class="button button-primary" data-add="${product.id}">Add to bag →</button>
    </div>
  `;
  modal.showModal();
}


function filterProducts() {
  const term = document.querySelector('#search-input')?.value.toLowerCase() || '';
  const active = document.querySelector('.filter.active')?.dataset.category || 'All';

  renderProducts(
    products.filter(product => 
      (active === 'All' || product.category === active) && 
      product.name.toLowerCase().includes(term)
    )
  );
}

function validateContactForm(event) {
  event.preventDefault();
  const form = event.currentTarget;
  let valid = true;

  form.querySelectorAll('input, textarea').forEach(input => {
    const message = input.nextElementSibling;
    let error = '';

    if (!input.value.trim()) {
      error = 'This field is required.';
    } else if (input.type === 'email' && !/^\S+@\S+\.\S+$/.test(input.value)) {
      error = 'Enter a valid email address.';
    }

    message.textContent = error;
    input.classList.toggle('invalid', Boolean(error));

    if (error) valid = false;
  });

  if (valid) {
    form.reset();
    form.querySelector('.form-success').hidden = false;
  }
}



document.addEventListener('DOMContentLoaded', () => {
  document.querySelectorAll('.year').forEach(el => el.textContent = new Date().getFullYear());

  if (localStorage.getItem('shopease-theme') === 'dark') {
    document.body.classList.add('dark');
  }

  // Initial render
  renderProducts();
  updateCart();

  // Category filter from URL params
  const categoryFromUrl = new URLSearchParams(location.search).get('category');
  if (categoryFromUrl) {
    const button = document.querySelector(`[data-category="${categoryFromUrl}"]`);
    if (button) {
      document.querySelector('.filter.active')?.classList.remove('active');
      button.classList.add('active');
      filterProducts();
    }
  }

  
  document.addEventListener('click', event => {
    const add = event.target.closest('[data-add]');
    const details = event.target.closest('[data-details]');
    const remove = event.target.closest('[data-remove]');

    if (add) addToCart(Number(add.dataset.add));
    if (details) openDetails(Number(details.dataset.details));
    if (remove) removeFromCart(Number(remove.dataset.remove));
  });

  
  function closeCart() {
    document.querySelector('.cart-drawer').classList.remove('open');
    document.querySelector('.overlay').classList.remove('show');
  }

  document.querySelector('.cart-button')?.addEventListener('click', () => {
    document.querySelector('.cart-drawer').classList.add('open');
    document.querySelector('.overlay').classList.add('show');
  });

  document.querySelector('.close-cart')?.addEventListener('click', closeCart);
  document.querySelector('.overlay')?.addEventListener('click', closeCart);

  document.querySelector('.close-modal')?.addEventListener('click', () => {
    document.querySelector('.product-modal').close();
  });

  document.querySelector('.theme-toggle')?.addEventListener('click', () => {
    document.body.classList.toggle('dark');
    localStorage.setItem(
      'shopease-theme', 
      document.body.classList.contains('dark') ? 'dark' : 'light'
    );
  });

  // Navigation menu toggle control
  document.querySelector('.menu-toggle')?.addEventListener('click', event => {
    const nav = document.querySelector('.main-nav');
    nav.classList.toggle('open');
    event.currentTarget.setAttribute('aria-expanded', nav.classList.contains('open'));
  });

  document.querySelector('#search-input')?.addEventListener('input', filterProducts);
  
  document.querySelectorAll('.filter').forEach(button => {
    button.addEventListener('click', () => {
      document.querySelector('.filter.active')?.classList.remove('active');
      button.classList.add('active');
      filterProducts();
    });
  });

  
  document.querySelector('#contact-form')?.addEventListener('submit', validateContactForm);
  
  document.querySelector('.checkout-button')?.addEventListener('click', () => {
    showToast('Checkout is a demo feature for this lab project.');
  });
});
#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xf639a309, "mmc_gpio_get_cd" },
	{ 0x3c3bbe73, "mmc_gpio_get_ro" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x2f4ae1fc, "mmc_gpiod_request_cd_irq" },
	{ 0x3d31577c, "mmc_gpiod_request_ro" },
	{ 0xd72696a5, "mmc_gpiod_request_cd" },
	{ 0x4f027abe, "mmc_add_host" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe1c4bdae, "mmc_spi_get_pdata" },
	{ 0x847b33e9, "mmc_alloc_host" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6edec05, "mmc_request_done" },
	{ 0x4ba84367, "spi_bus_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x3322c209, "flush_dcache_page" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xbf435ad9, "spi_bus_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x438e8557, "dma_sync_single_for_cpu" },
	{ 0xd8bc9330, "spi_sync_locked" },
	{ 0x285af5d2, "dma_sync_single_for_device" },
	{ 0xfdf71005, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37099d1c, "mmc_free_host" },
	{ 0x5c11e56d, "mmc_spi_put_pdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xb107d2d3, "mmc_remove_host" },
	{ 0x73534824, "dma_unmap_page_attrs" },
};

MODULE_INFO(depends, "of_mmc_spi,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");
MODULE_ALIAS("spi:mmc-spi-slot");

MODULE_INFO(srcversion, "8742B0F94C1DA713466644A");
